import requests
import datetime

date = datetime.datetime.today().strftime("%Y/%m/%d")

# http://api.jugemkey.jp/api/horoscope/year/month/day の形式
res = requests.get(url='http://api.jugemkey.jp/api/horoscope/free/'+ date)

msg = '牡羊座'

for uranai_data in res.json()["horoscope"][date]:
    if uranai_data['sign'] == msg:
        reply_message = [
                str(uranai_data['rank']) + '位',
                uranai_data['content'],
                'ラッキーアイテム\n' + uranai_data['item']
            ]
print(reply_message)