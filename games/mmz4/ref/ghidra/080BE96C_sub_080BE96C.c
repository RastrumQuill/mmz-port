// sub_080BE96C at 0x080BE96C (thumb)

undefined8 sub_080BE96C(undefined4 *param_1,uint param_2,undefined param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed94);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 8;
    *(undefined *)(iVar2 + 9) = 6;
    *(undefined4 *)(iVar2 + 0x14) = 0x80beae5;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined *)(iVar2 + 0x10) = 2;
    *(undefined *)(iVar2 + 0x11) = param_3;
    if ((param_2 & 0xff) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(char *)(iVar2 + 0x4c) = (char)(param_2 & 1);
    *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xef | (byte)((param_2 & 1) << 4);
  }
  return CONCAT44(in_lr,iVar2);
}

