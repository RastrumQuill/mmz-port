// sub_080118C8 at 0x080118C8 (thumb)

undefined4 sub_080118C8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_08011922:
    if (DAT_0202e01c != '\x01') goto LAB_0801198c;
    sub_08002D68(0x31,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0801193c:
    cVar2 = sub_08002EA0(0x31);
    if ((cVar2 != '\x04') || (DAT_0202e01c != '\x02')) goto LAB_0801198c;
    sub_08002EF0(0x31);
    sub_08002D68(0x32,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_0801198c;
      (&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] =
           (&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 3;
      *(undefined4 *)(param_1 + 0x48) = 0x80;
      *(undefined4 *)(param_1 + 0x50) = 0xa0;
      sub_08002D68(0x2a,0);
      sub_08002D68(0x2b,0);
      sub_08002D68(0x2d,0);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_08011922;
    }
    if (bVar1 == 2) goto LAB_0801193c;
    if (bVar1 != 3) goto LAB_0801198c;
  }
  cVar2 = sub_08002EA0(0x32);
  if (cVar2 == '\x03') {
    sub_08002EF0(0x32);
    DAT_0202e01c = '\0';
    *(undefined *)(param_1 + 0xe) = 1;
  }
LAB_0801198c:
  sub_08002EA0(0x2a);
  sub_08002EA0(0x2b);
  sub_08002EA0(0x2d);
  return in_lr;
}

