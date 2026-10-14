// sub_080080B8 at 0x080080B8 (thumb)

undefined4 sub_080080B8(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  DAT_020011c8 = *param_1;
  DAT_020011cc = param_1[1];
  local_1c = ((DAT_020011c8 >> 8) + -0x78) * 0x100;
  local_18 = ((DAT_020011cc >> 8) + -0x50) * 0x100;
  puVar1 = (uint *)sub_080089C8(&local_1c);
  if ((uint)DAT_020011d0 != *puVar1) {
    DAT_020011d0 = (ushort)*puVar1;
    sub_080EF118(&local_1c,*(undefined4 *)puVar1[1]);
  }
  sub_080EF118(&local_1c,*(undefined4 *)(puVar1[1] + 4));
  iVar4 = 0;
  iVar3 = 2;
  do {
    piVar2 = (int *)((int)&DAT_02001020 + iVar4);
    sub_08008BB0(piVar2,puVar1,&local_1c);
    if (*piVar2 != 0) {
      sub_080EF11C(piVar2,puVar1);
    }
    iVar4 = iVar4 + 0x88;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return in_lr;
}

