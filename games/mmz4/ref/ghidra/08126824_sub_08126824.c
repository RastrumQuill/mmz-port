// sub_08126824 at 0x08126824 (thumb)

void sub_08126824(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  iVar1 = 0x24;
  puVar3 = &DAT_081364bc;
  do {
    uVar4 = *puVar3;
    uVar5 = FUN_0812683e(param_1,iVar1);
    iVar2 = (int)((ulonglong)uVar5 >> 0x20);
    *(undefined4 *)uVar5 = uVar4;
    param_1 = (undefined4 *)uVar5 + 1;
    puVar3 = puVar3 + 1;
    iVar1 = iVar2 + -1;
  } while (iVar1 != 0 && 0 < iVar2);
  return;
}

