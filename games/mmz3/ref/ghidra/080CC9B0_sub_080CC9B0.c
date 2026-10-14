// sub_080CC9B0 at 0x080CC9B0 (thumb)

undefined4 sub_080CC9B0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x77);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    sub_08017700(param_1,0x3b00);
    sub_080177F4(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  piVar5 = (int *)(param_1 + 0xb4);
  iVar2 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),iVar2 + *piVar5);
  if (iVar2 < 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x58) + *piVar5;
  iVar3 = *(int *)(param_1 + 0x58) + 0x1000;
  if (iVar2 < iVar3) {
    iVar2 = iVar3;
  }
  iVar3 = sub_0800A5A4(*(undefined4 *)(param_1 + 0x54),iVar2 + 0x800);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((((bVar1 & 3) == 0) && (uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54), uVar4 < 0x800)) &&
     (*(int *)(param_1 + 100) < 0x78)) {
    iVar3 = *(int *)(param_1 + 0x54) + -0x2800;
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    local_1c = iVar3;
    local_1c = sub_080FE4D8(uVar4 * 2 >> 0x11,0x2800);
    local_1c = local_1c + iVar3;
    local_18 = iVar2 + -0x400;
    sub_080B322C(&local_1c,1,0);
  }
  iVar2 = *piVar5;
  *piVar5 = iVar2 + -0x60;
  if (iVar2 + -0x60 < -0x1000) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

