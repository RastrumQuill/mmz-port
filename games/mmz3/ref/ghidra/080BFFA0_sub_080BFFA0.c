// sub_080BFFA0 at 0x080BFFA0 (thumb)

undefined4 sub_080BFFA0(int param_1)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08004230(0x57);
        puVar3 = (uint *)(iVar4 + 0xb4);
        *puVar3 = *puVar3 | 4;
        sub_08017700(param_1,0x4e01);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      puVar3 = (uint *)(iVar4 + 0xb4);
      *puVar3 = *puVar3 | 8;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x4e00);
    iVar4 = sub_08017B8C(param_1);
    sub_080040A8(0x57,(uint)(iVar4 << 0x18) >> 0x13 | 0x200);
    sub_080041E4(0x57);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

