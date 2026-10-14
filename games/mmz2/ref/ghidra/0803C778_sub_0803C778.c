// sub_0803C778 at 0x0803C778 (thumb)

undefined8 sub_0803C778(int param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = sub_08006B84(DAT_0202f070);
  if (iVar3 != 0) {
    sVar2 = sub_08037DC8(param_1,3);
    *(undefined *)(iVar3 + 9) = 9;
    *(undefined4 *)(iVar3 + 0x14) = 0x803c4d5;
    if (sVar2 < 2) {
      bVar1 = *(byte *)(iVar3 + 0xb) & 0xbf;
    }
    else {
      bVar1 = *(byte *)(iVar3 + 0xb) | 0x40;
    }
    *(byte *)(iVar3 + 0xb) = bVar1;
    *(undefined *)(iVar3 + 0x25) = 0x10;
    *(undefined2 *)(iVar3 + 0x20) = (&DAT_08335fd4)[sVar2];
    *(undefined1 *)(iVar3 + 0x22) = (&DAT_08335fdc)[sVar2];
    sub_08037DEC(param_1,param_4);
    *(undefined *)(iVar3 + 0x10) = param_2;
    *(int *)(iVar3 + 0x28) = param_1;
    *(int *)(param_1 + 0x2c) = iVar3;
    *(undefined4 *)(param_1 + 0x2a0) = 0;
  }
  return CONCAT44(in_lr,iVar3);
}

