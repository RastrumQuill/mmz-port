// sub_080ED2A8 at 0x080ED2A8 (thumb)

void sub_080ED2A8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  iVar1 = 0x24;
  puVar3 = &DAT_080ffaa4;
  do {
    uVar4 = *puVar3;
    uVar5 = FUN_080ed2c2(param_1,iVar1);
    iVar2 = (int)((ulonglong)uVar5 >> 0x20);
    *(undefined4 *)uVar5 = uVar4;
    param_1 = (undefined4 *)uVar5 + 1;
    puVar3 = puVar3 + 1;
    iVar1 = iVar2 + -1;
  } while (iVar1 != 0 && 0 < iVar2);
  return;
}

