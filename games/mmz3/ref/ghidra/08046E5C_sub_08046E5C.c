// sub_08046E5C at 0x08046E5C (thumb)

undefined4 sub_08046E5C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x22) = *(undefined *)(param_1 + 0x10);
        sub_08017700(param_1,0x3100);
        if (*(char *)(param_1 + 0x10) == '\0') {
          iVar4 = sub_08017B8C(param_1);
          sub_080040A8(0x16,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
          uVar2 = 0x16;
        }
        else {
          iVar4 = sub_08017B8C(param_1);
          sub_080040A8(0x11,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
          uVar2 = 0x11;
        }
        *(undefined *)(param_1 + 0xc6) = uVar2;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      pcVar7 = (char *)(param_1 + 0xc6);
      cVar3 = sub_080041E4(*pcVar7);
      if (cVar3 == '\x03') {
        if (*pcVar7 != '\0') {
          sub_08004230();
          *pcVar7 = '\0';
        }
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    pbVar5 = (byte *)(param_1 + 199);
    *pbVar5 = *(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54);
    iVar4 = *(int *)(param_1 + 0xb4) + -0xb000;
    *(int *)(param_1 + 0x54) = iVar4;
    *(uint *)(param_1 + 0x54) = iVar4 + (uint)*pbVar5 * 0x16000;
    iVar4 = *(int *)(param_1 + 0xb8) + 0x3000;
    *(int *)(param_1 + 0x58) = iVar4;
    *(uint *)(param_1 + 0x58) = iVar4 + (uint)*pbVar5 * -0x10000;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  iVar9 = *(int *)(param_1 + 0x54);
  iVar8 = *(int *)(param_1 + 0x58);
  iVar6 = *(int *)(param_1 + 0xb8);
  iVar4 = FUN_080fe2f8((*(int *)(param_1 + 0xb4) - iVar9) + -0x5800 +
                       (uint)*(byte *)(param_1 + 199) * 0xb000,0xc);
  iVar6 = FUN_080fe2f8(iVar6 - (iVar8 + 0x5000),0xc);
  *(int *)(param_1 + 0x54) = iVar9 + iVar4;
  *(int *)(param_1 + 0x58) = iVar8 + iVar6;
  sub_080177F4(param_1);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(undefined *)(param_1 + 200) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

