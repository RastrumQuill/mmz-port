// sub_08027F54 at 0x08027F54 (thumb)

undefined8 sub_08027F54(int param_1,byte param_2,undefined param_3)

{
  char cVar1;
  int iVar2;
  undefined uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005428(DAT_02022e90);
  if (iVar2 != 0) {
    cVar1 = sub_0801C6EC(param_1,2);
    *(char *)(iVar2 + 0x1e) = cVar1 + '\x01';
    *(undefined *)(iVar2 + 9) = 2;
    *(undefined4 *)(iVar2 + 0x14) = 0x80276c9;
    uVar3 = *(undefined *)(param_1 + 0x19d);
    if (param_2 < 0x20) {
      uVar3 = 0;
    }
    sub_08025D70(cVar1,2,uVar3);
    *(byte *)(iVar2 + 0x10) = param_2;
    *(undefined *)(iVar2 + 0x11) = param_3;
    *(undefined *)(iVar2 + 0x54) = uVar3;
    *(undefined *)(iVar2 + 0x12) = 0;
    *(int *)(iVar2 + 0x20) = param_1;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined *)(iVar2 + 0x62) = 0;
    *(undefined *)(iVar2 + 0x60) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(iVar2 + 0x61) = *(undefined *)(param_1 + 0xe);
    *(int *)(param_1 + 0x24) = iVar2;
  }
  return CONCAT44(in_lr,iVar2);
}

