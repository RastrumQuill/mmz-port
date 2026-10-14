// sub_080629E4 at 0x080629E4 (thumb)

undefined4 sub_080629E4(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_080032EC(0x5f);
        *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffc | 0x60;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined *)(param_1 + 0x12) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      iVar3 = *(int *)(param_1 + 0xbc) + 0xf000;
      if (iVar3 < *(int *)(param_1 + 0x58)) {
        *(int *)(param_1 + 0x58) = iVar3;
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
        puVar6 = (uint *)(param_1 + 0xb4);
        uVar2 = *puVar6;
        *puVar6 = uVar2 & 0xffffffbf | 0x101;
        if (0x1e < *(byte *)(param_1 + 0x12)) {
          *puVar6 = uVar2 & 0xfffffebe | 0x40;
          *(undefined *)(param_1 + 0xd) = 7;
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
      sub_080128D4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x12) & 7) < 5) {
    uVar2 = *(uint *)(param_1 + 0xb4) & 0xffffff9f;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xb4) | 0x60;
  }
  *(uint *)(param_1 + 0xb4) = uVar2;
  cVar9 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar9;
  iVar3 = *(int *)(param_1 + 100);
  iVar7 = iVar3 + -0x180;
  *(int *)(param_1 + 0x54) = iVar7;
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  uVar5 = uVar2 & 0x7fffffff;
  DAT_0202e188 = uVar5;
  iVar4 = sub_080EF330(uVar2 * 2 >> 0x11,0x300);
  *(int *)(param_1 + 0x54) = iVar7 + iVar4;
  iVar8 = *(int *)(param_1 + 0x68);
  iVar7 = iVar8 + -0x180;
  *(int *)(param_1 + 0x58) = iVar7;
  uVar2 = uVar5 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  iVar4 = sub_080EF330(uVar2 * 2 >> 0x11,0x300);
  *(int *)(param_1 + 0x58) = iVar7 + iVar4;
  if (cVar9 == '\0') {
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x58) = iVar8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

