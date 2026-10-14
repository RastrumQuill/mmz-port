// sub_080EB3F4 at 0x080EB3F4 (thumb)

undefined4 sub_080EB3F4(int param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar4 = DAT_02000d14 & 2;
  if ((DAT_02000d14 & 2) == 0) {
    uVar5 = (uint)*(byte *)(param_1 + 0xdd9);
    uVar6 = uVar5;
    if ((DAT_02000d14 & 0xd1) != 0) {
      uVar1 = DAT_02000d14 & 0x11;
      if ((DAT_02000d14 & 0x11) == 0) {
        bVar3 = sub_080D5C94(*(undefined4 *)(param_1 + 0x75b8),uVar5);
        uVar6 = (uint)(char)bVar3;
        if (uVar6 != uVar5) {
          *(undefined *)(param_1 + 3) = 1;
          *(ushort *)(param_1 + 4) = uVar1;
          *(byte *)(param_1 + 0xdd9) = bVar3;
          sub_080032EC();
          sub_080EB4A4(param_1);
          return in_lr;
        }
      }
      else {
        cVar2 = sub_080D5830(*(undefined4 *)(param_1 + 0x75b8),0,uVar5);
        if (cVar2 == '\0') {
          sub_080032EC(4);
        }
        else {
          *(undefined *)(param_1 + 2) = 2;
          *(char *)(param_1 + 3) = (char)uVar4;
          *(ushort *)(param_1 + 4) = uVar4;
        }
      }
    }
    sub_080EBBA0(uVar6 & 0xff);
  }
  else {
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    sub_080032EC(3);
  }
  return in_lr;
}

