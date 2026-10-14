// sub_0802C73C at 0x0802C73C (thumb)

undefined4 sub_0802C73C(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x18d) = 1;
  bVar1 = sub_08033B28(param_1);
  if (bVar1 != 0) {
    bVar2 = *(byte *)(param_1 + 0x95);
    if (bVar2 < bVar1) {
      bVar2 = 0;
    }
    else {
      bVar2 = bVar2 - bVar1;
    }
    *(byte *)(param_1 + 0x95) = bVar2;
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x3200) {
      sub_080177CC(param_1,0x3100,3,4);
    }
    else {
      sub_080177CC(param_1,0x3200,3,4);
    }
  }
  pbVar4 = (byte *)(param_1 + 0x143);
  if ((*pbVar4 & 0xf) != 0) {
    if ((*pbVar4 & 0xf0) == 0) {
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x3200) {
        sub_080177CC(param_1,0x3200,3,4);
      }
    }
    else if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x3100) {
      sub_080177CC(param_1,0x3100,3,4);
    }
    *pbVar4 = *pbVar4 & 0xf0;
  }
  if ((*(char *)(param_1 + 0x95) == '\0') || ((*(uint *)(param_1 + 0x8c) & 0x400) == 0)) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_0802A3EC(param_1);
  }
  else {
    pbVar4 = (byte *)(param_1 + 0x147);
    sub_08025C04(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,0);
    sub_08025C04(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,1);
    sub_08025EC4(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,0);
    sVar3 = sub_08026664(param_1,&DAT_0835b034 + (uint)*pbVar4 * 8,0);
    if (sVar3 == 0) {
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

