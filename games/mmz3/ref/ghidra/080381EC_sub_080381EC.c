// sub_080381EC at 0x080381EC (thumb)

undefined8 sub_080381EC(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  uVar2 = (uint)*(byte *)(param_1 + 0x71);
  if (((~(*(byte *)(*(int *)(param_1 + 0xb4) + 10) >> 4) & 1) == (*(byte *)(param_1 + 10) >> 4 & 1))
     || (*(char *)(param_1 + 0xe) != '\0')) {
    *(undefined *)(param_1 + 0xe) = 1;
    if (*(char *)(param_1 + 0x72) < '\x02') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar1 = *(int *)(param_1 + 0x54) - (int)*(short *)(uVar2 * 2 + param_2);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x54) + (int)*(short *)(uVar2 * 2 + param_2);
      }
      *(int *)(param_1 + 0x54) = iVar1;
      if (3 < uVar2 + 1) {
        uVar3 = 1;
      }
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0xb4) + 0x54) + *(int *)(param_1 + 0xb8);
    if ((*(char *)(param_1 + 0x72) < '\x02') && (uVar2 = uVar2 + 1 & 0xff, 3 < uVar2)) {
      uVar3 = 1;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1 & 0xff) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - (int)*(short *)(uVar2 * 2 + param_2);
      }
    }
    else {
      for (; uVar2 != 0; uVar2 = uVar2 - 1 & 0xff) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)*(short *)(uVar2 * 2 + param_2);
      }
    }
  }
  return CONCAT44(in_lr,uVar3);
}

