// sub_080C0128 at 0x080C0128 (thumb)

undefined4 sub_080C0128(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar4 + 0xc) == '\x04') {
    sub_08004230(0x57);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar3 = &DAT_0836a0c8 + *(byte *)(param_1 + 9);
    *(undefined4 *)(param_1 + 0xc) = 3;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xe);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 == 2) {
          sub_08017700(param_1,0x4e03);
          *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        }
        else if (bVar1 != 3) {
          return in_lr;
        }
        sub_080177F4(param_1);
        if (*(char *)(param_1 + 0x73) != '\x03') {
          return in_lr;
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        piVar3 = &DAT_0836a0c8 + *(byte *)(param_1 + 9);
        *(undefined4 *)(param_1 + 0xc) = 3;
        goto LAB_080c0244;
      }
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_08017700(param_1,0x4e02);
      iVar2 = sub_08017B8C(param_1);
      sub_080040A8(0x57,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
      sub_080041E4(0x57);
      *(undefined *)(param_1 + 0x12) = 2;
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 0x12) != '\0') {
      if (*(char *)(param_1 + 0x12) == '\x01') {
        sub_08004230(0x57);
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    sub_080177F4(param_1);
    if (*(byte *)(iVar4 + 0xc) < 2) {
      if ((*(uint *)(iVar4 + 0xb4) & 0x800) != 0) {
        return in_lr;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      return in_lr;
    }
    sub_08004230(0x57);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar3 = &DAT_0836a0c8 + *(byte *)(param_1 + 9);
    *(undefined4 *)(param_1 + 0xc) = 3;
  }
LAB_080c0244:
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  return in_lr;
}

