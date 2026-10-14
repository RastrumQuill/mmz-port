// sub_08062478 at 0x08062478 (thumb)

undefined4 sub_08062478(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08017700(param_1,0xd601);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(iVar7 + 0xd) != '\x01') {
    sub_08007390(param_1 + 0x74,&DAT_08361f94);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),0xf);
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    sub_08061B30(param_1,0x1400,0xffffcf00);
  }
  sub_080177F4(param_1);
  iVar8 = *(int *)(iVar7 + 0x54);
  *(int *)(param_1 + 0x54) = iVar8;
  *(int *)(param_1 + 0x58) = *(int *)(iVar7 + 0x58) + -0x1200;
  puVar6 = (uint *)(iVar7 + 0xbc);
  if ((*puVar6 & 2) == 0) {
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    if (iVar8 < *(int *)(DAT_0202f5c0 + 0x54)) {
      if ((bVar1 & 1) == 1) goto LAB_0806252a;
    }
    else if ((bVar1 & 1) == 0) goto LAB_0806252a;
    *puVar6 = *puVar6 | 1;
    uVar4 = 0;
    uVar3 = 5;
  }
  else {
LAB_0806252a:
    uVar5 = *puVar6 & 4;
    uVar4 = (undefined)uVar5;
    if (uVar5 == 0) {
      if ((*puVar6 & 0x20) == 0) {
        return in_lr;
      }
      uVar3 = 10;
    }
    else {
      uVar4 = 0;
      uVar3 = 8;
    }
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = uVar4;
  return in_lr;
}

