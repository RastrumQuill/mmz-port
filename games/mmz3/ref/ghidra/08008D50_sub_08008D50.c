// sub_08008D50 at 0x08008D50 (thumb)

undefined4 sub_08008D50(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  DAT_02002648 = *param_1;
  DAT_0200264c = param_1[1];
  local_1c = ((DAT_02002648 >> 8) + -0x78) * 0x100;
  local_18 = ((DAT_0200264c >> 8) + -0x50) * 0x100;
  puVar1 = (uint *)sub_08009704(&local_1c);
  if ((uint)DAT_02002650 != *puVar1) {
    DAT_02002650 = (ushort)*puVar1;
    sub_080FE2C0(&local_1c,*(undefined4 *)puVar1[1]);
  }
  sub_080FE2C0(&local_1c,*(undefined4 *)(puVar1[1] + 4));
  iVar4 = 0;
  iVar3 = 2;
  do {
    piVar2 = (int *)((int)&DAT_020024a0 + iVar4);
    sub_080098EC(piVar2,puVar1,&local_1c);
    if (*piVar2 != 0) {
      sub_080FE2C4(piVar2,puVar1);
    }
    iVar4 = iVar4 + 0x88;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return in_lr;
}

