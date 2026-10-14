// sub_080BF100 at 0x080BF100 (thumb)

undefined4 sub_080BF100(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined *)(param_1 + 0x25) = 0x16;
      sub_08017700(param_1,0x4b00);
      iVar1 = sub_08017B8C(param_1);
      sub_080040A8(0x46,(uint)(iVar1 << 0x18) >> 0x13 | 0x200);
    }
    else {
      *(undefined *)(param_1 + 0x25) = 0x1a;
      sub_08017700(param_1,0x4b01);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(uint *)(param_1 + 0x54) =
       *(int *)(iVar2 + 0x54) + -0x300 + (uint)*(byte *)(param_1 + 0x12) * 0x600;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
  if ((*(uint *)(iVar2 + 0xc0) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080041E4(0x46);
  sub_080177F4(param_1);
  return in_lr;
}

