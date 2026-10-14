// sub_080B4E54 at 0x080B4E54 (thumb)

undefined8 sub_080B4E54(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0xc;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b4eed;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(int *)(iVar1 + 0x28) = param_1;
    if ((param_2 & 0xff) == 0) {
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xdf;
    }
    else {
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) | 0x20;
    }
    *(char *)(iVar1 + 0x4d) = (char)(param_2 & 1);
    *(byte *)(iVar1 + 0x4a) = *(byte *)(iVar1 + 0x4a) & 0xdf | (byte)((param_2 & 1) << 5);
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined *)(param_1 + 0x11b) = 1;
  }
  return CONCAT44(in_lr,iVar1);
}

