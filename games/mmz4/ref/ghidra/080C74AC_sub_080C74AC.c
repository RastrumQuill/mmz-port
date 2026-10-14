// sub_080C74AC at 0x080C74AC (thumb)

undefined4 sub_080C74AC(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  bVar1 = *(byte *)(param_1 + 0xb4);
  bVar2 = *(byte *)(param_1 + 10);
  sub_0801CFF0(param_1);
  local_20 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  local_1c = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar4 = sub_08007C7C();
  if (sVar4 != 0) {
    uVar5 = sub_08007C7C(local_20,*(undefined4 *)(param_1 + 0x58));
    uVar6 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),local_1c);
    if (((int)-(uVar6 & 0xffff) >> 0x1f) - ((int)-(uVar5 & 0xffff) >> 0x1f) == 1) {
      iVar8 = (int)((bVar1 - 0x40) * 0x1000000) >> 0x1f;
      local_20 = sub_080C79A4(&local_20,-iVar8);
      local_20 = local_20 + (iVar8 * -2 + -1) * -0x400;
      iVar8 = 0xc0;
    }
    else {
      iVar8 = (int)((bVar1 + 0x80) * 0x1000000) >> 0x1f;
      local_1c = sub_080C79A4(&local_20,2 - iVar8);
      local_1c = local_1c + (iVar8 * -2 + -1) * -0x400;
      iVar8 = ((bVar2 >> 4 & 1) + 1 & 1) << 7;
    }
    cVar3 = (char)iVar8;
    *(char *)(param_1 + 0xb4) = cVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      cVar3 = -0x80 - cVar3;
    }
    *(char *)(param_1 + 0x24) = cVar3 + -0x80;
    iVar7 = (int)*(short *)((int)&DAT_08128c10 + ((uint)((iVar8 + 0x40) * 0x1000000) >> 0x17)) *
            *(int *)(param_1 + 0xb8);
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar7 >> 8;
    iVar8 = (int)(short)(&DAT_08128c10)[iVar8] * *(int *)(param_1 + 0xb8);
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar8 >> 8;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  *(int *)(param_1 + 0x54) = local_20;
  *(int *)(param_1 + 0x58) = local_1c;
  return in_lr;
}

