// sub_08028DA0 at 0x08028DA0 (thumb)

undefined8 sub_08028DA0(int param_1,byte param_2,undefined param_3)

{
  char cVar1;
  int iVar2;
  undefined uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005458(DAT_02022e90);
  if (iVar2 != 0) {
    cVar1 = sub_0801C6EC(param_1,3);
    *(char *)(iVar2 + 0x1e) = cVar1 + '\x01';
    *(undefined *)(iVar2 + 9) = 3;
    *(undefined4 *)(iVar2 + 0x14) = 0x8028605;
    *(char *)(iVar2 + 0xd9) = cVar1;
    if (param_2 < 5) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined *)(param_1 + 0x19d);
    }
    sub_08025D70(cVar1,3,0);
    *(byte *)(iVar2 + 0x10) = param_2;
    *(undefined *)(iVar2 + 0x11) = param_3;
    *(undefined *)(iVar2 + 0xd8) = uVar3;
    *(int *)(iVar2 + 0x20) = param_1;
    *(undefined *)(iVar2 + 0x60) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(iVar2 + 0x61) = *(undefined *)(param_1 + 0xe);
    *(int *)(param_1 + 0x24) = iVar2;
    if (param_2 < 5) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
    else {
      *(int *)(param_1 + 0xe8) = iVar2;
    }
  }
  return CONCAT44(in_lr,iVar2);
}

