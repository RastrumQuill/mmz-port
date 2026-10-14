// sub_080BDE5C at 0x080BDE5C (thumb)

undefined8 sub_080BDE5C(undefined4 param_1,int *param_2,uint param_3,undefined param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed94);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 8;
    *(undefined *)(iVar2 + 9) = 3;
    *(undefined4 *)(iVar2 + 0x14) = 0x80bdf1d;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    iVar3 = (param_3 & 0xff) * 8;
    *(int *)(iVar2 + 0x54) = *param_2 + *(int *)(&DAT_0886186c + iVar3);
    *(int *)(iVar2 + 0x58) = param_2[1] + *(int *)(&DAT_08861870 + iVar3);
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined4 *)(iVar2 + 0xb4) = param_1;
    *(undefined *)(iVar2 + 0x10) = param_4;
    *(undefined *)(iVar2 + 0x11) = 0;
    if ((param_3 & 0xff) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    *(char *)(iVar2 + 0x4c) = (char)(param_3 & 1);
    *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xef | (byte)((param_3 & 1) << 4);
  }
  return CONCAT44(in_lr,iVar2);
}

