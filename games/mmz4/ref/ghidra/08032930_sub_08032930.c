// sub_08032930 at 0x08032930 (thumb)

undefined4 sub_08032930(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x1b9) = 1;
  bVar1 = sub_080396B4(param_1);
  if (bVar1 != 0) {
    bVar2 = *(byte *)(param_1 + 0x95);
    if (bVar2 != 0xff) {
      if (bVar2 < bVar1) {
        bVar2 = 0;
      }
      else {
        bVar2 = bVar2 - bVar1;
      }
      *(byte *)(param_1 + 0x95) = bVar2;
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x4b00) {
        sub_0801CFC8(param_1,0x4a00,3,4);
      }
      else {
        sub_0801CFC8(param_1,0x4b00,3,4);
      }
    }
  }
  if (*(char *)(param_1 + 0x171) != '\0') {
    if (*(char *)(param_1 + 0x172) == '\0') {
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x4b00) {
        sub_0801CFC8(param_1,0x4b00,3,4);
      }
    }
    else if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x4a00) {
      sub_0801CFC8(param_1,0x4a00,3,4);
    }
    *(char *)(param_1 + 0x171) = '\0';
  }
  if ((*(char *)(param_1 + 0x95) == '\0') || ((*(uint *)(param_1 + 0x8c) & 0x400) == 0)) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_0803077C(param_1);
  }
  else {
    pbVar4 = (byte *)(param_1 + 0x174);
    sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar4 * 8,0);
    sub_0802B7D8(param_1,&DAT_0884fe30 + (uint)*pbVar4 * 8,1);
    sub_0802BAD8(param_1,&DAT_0884fe30 + (uint)*pbVar4 * 8,0);
    sVar3 = sub_0802C2BC(param_1,&DAT_0884fe30 + (uint)*pbVar4 * 8,0);
    if (sVar3 == 0) {
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

