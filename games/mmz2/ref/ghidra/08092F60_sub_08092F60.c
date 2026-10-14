// sub_08092F60 at 0x08092F60 (thumb)

undefined4 sub_08092F60(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x12) != '\0') {
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 4;
      uVar3 = *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
      goto LAB_08093140;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (0 < *(int *)(param_1 + 0x5c)) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    if (*(int *)(param_1 + 0x5c) < -0x300) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffd00;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    puVar7 = (uint *)(param_1 + 0x8c);
    if ((*puVar7 & 0x10000) == 0) {
      *(undefined *)(param_1 + 0x12) = 8;
      local_1c = *(undefined4 *)(param_1 + 0x54);
      local_18 = *(undefined4 *)(param_1 + 0x58);
      sub_080BD1A8(param_1,&local_1c);
      sub_080AC60C(1,&local_1c);
      sub_080032EC(0x2a);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      sub_0801DD2C(4,param_1 + 0x54);
      if (DAT_0202ebfc < 9999) {
        DAT_0202ebfc = DAT_0202ebfc + 1;
      }
      sub_0801DE2C(param_1,param_1 + 0x54);
      *puVar7 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined *)(param_1 + 0xd) = 2;
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x20;
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58);
    sub_080BD160(param_1);
    sub_080127E4(param_1,0x9002);
    *puVar7 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar6;
  iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar5;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x20;
  if ((cVar4 == '\0') || (sVar2 = sub_08008CFC(iVar6,iVar5), sVar2 != 0)) {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0xc00;
    sub_080AC60C(1,&local_1c);
    sub_080032EC(0x2a);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_0801DD2C(4,param_1 + 0x54);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,param_1 + 0x54);
  }
  sub_080128D4(param_1);
  if ((DAT_0202ebbb & 0x20) == 0) {
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  uVar3 = *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
LAB_08093140:
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return in_lr;
}

