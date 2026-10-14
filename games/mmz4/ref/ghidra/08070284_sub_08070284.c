// sub_08070284 at 0x08070284 (thumb)

undefined4 sub_08070284(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xb9) = 0;
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((*puVar4 & 1) != 0) {
    sub_08006984(0x43);
  }
  sub_080025D8(0x7a);
  if ((((*puVar4 & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     (bVar1 = (byte)DAT_0202e918 & 8, (DAT_0202e918 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if ((*puVar4 & 0x10000) == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0xe) = bVar1;
      *(byte *)(param_1 + 0xf) = bVar1;
    }
    sub_08073218(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_0807032e:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_08070340;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar2 = sub_0802AD94(0x17,param_1,&DAT_088596fc);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    goto LAB_0807032e;
  }
  iVar3 = sub_0802B3CC();
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_08070340:
  sub_08128884(param_1,*(undefined4 *)(&DAT_088592ac + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

