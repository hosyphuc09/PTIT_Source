def xu_ly():
    emails=set()
    with open("CONTACT.in","r",encoding="utf-8") as f:
        for line in f:
            email=line.strip()
            if email:
                emails.add(email.lower())
    emails=sorted(emails)
    for email in emails:
        print(email)
xu_ly()