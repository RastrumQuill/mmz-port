// sub_080E16DC at 0x080E16DC (thumb)

undefined4 sub_080E16DC(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_24;
  undefined4 local_20;
  
  local_24 = 0;
  DAT_0203063c = param_1;
  sub_080FE110(&local_24,param_1,0x1000010);
  local_20 = 0;
  FUN_080fe114(&local_20,param_1 + 0x40,&DAT_05000003);
  uVar3 = 0;
  do {
    *(byte *)(DAT_0203063c + uVar3) = *(byte *)(DAT_0203063c + uVar3) | 1;
    cVar1 = sub_080E17C8(uVar3);
    if (cVar1 != '\0') {
      *(byte *)(DAT_0203063c + uVar3) = *(byte *)(DAT_0203063c + uVar3) | 2;
      if (((&DAT_0836e30c)[uVar3 * 4] & 7) == 1) {
        piVar2 = (int *)(DAT_0203063c + uVar3);
        *(byte *)piVar2 =
             *(byte *)piVar2 & 0xe7 | (byte)((((uint)(*piVar2 << 0x1b) >> 0x1e) + 1 & 3) << 3);
      }
      if (((&DAT_0836e30c)[uVar3 * 4] & 7) == 2) {
        piVar2 = (int *)(DAT_0203063c + uVar3);
        *(byte *)piVar2 =
             *(byte *)piVar2 & 0xe7 | (byte)((((uint)(*piVar2 << 0x1b) >> 0x1e) + 1 & 3) << 3);
        piVar2 = (int *)(DAT_0203063c + uVar3);
        *(byte *)piVar2 =
             *(byte *)piVar2 & 0xe7 | (byte)((((uint)(*piVar2 << 0x1b) >> 0x1e) + 1 & 3) << 3);
      }
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 0x4a);
  return in_lr;
}

