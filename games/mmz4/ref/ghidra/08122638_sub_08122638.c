// sub_08122638 at 0x08122638 (thumb)

undefined4 sub_08122638(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  DAT_0203c780 = 0;
  uVar4 = 0;
  do {
    iVar2 = sub_08001594(uVar4,0x14c);
    if (iVar2 == 0) {
      (&DAT_0203c78e)[uVar4 * 0xc] = 0;
    }
    else {
      (&DAT_0203c78e)[uVar4 * 0xc] = 1;
      cVar1 = sub_080016F0(uVar4,&DAT_0203c7c0,0x14c);
      if (cVar1 == '\0') {
        do {
          sub_08001574();
          if (DAT_02000790 == '\x01') {
            uVar3 = 0;
          }
          else {
            uVar3 = (uint)(byte)DAT_020007ae;
          }
        } while (uVar3 == 0);
        if ((int)(uVar3 * 0x1000000) < 0) {
          (&DAT_0203c78e)[uVar4 * 0xc] = 2;
        }
        else {
          DAT_0203c780 = 1;
          (&DAT_0203c784)[uVar4 * 3] = DAT_0203c86c;
          (&DAT_0203c788)[uVar4 * 3] = (uint)DAT_0203c865;
          (&DAT_0203c78c)[uVar4 * 0xc] = (char)DAT_0203c7c0;
          (&DAT_0203c78d)[uVar4 * 0xc] = (char)DAT_0203c7c2;
        }
      }
      else {
        (&DAT_0203c78e)[uVar4 * 0xc] = 2;
      }
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 5);
  return in_lr;
}

