// sub_0805C4EC at 0x0805C4EC (thumb)

undefined4 sub_0805C4EC(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 local_24 [3];
  
  local_24[0] = 0x51;
  local_24[1] = 0x50;
  local_24[2] = 0x52;
  uVar5 = (uint)*(byte *)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 0x11);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_08006984(*(undefined2 *)(local_24 + uVar5));
  }
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     (bVar2 = (byte)DAT_0202e918 & 8, (DAT_0202e918 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if (cVar1 == '\x02') {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else {
      *(byte *)(param_1 + 0xd) = bVar2;
    }
    *(byte *)(param_1 + 0xe) = bVar2;
    *(byte *)(param_1 + 0xf) = bVar2;
    sub_0805E9CC(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) goto LAB_0805c5c4;
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (uVar5 == 1) {
      uVar3 = 0xd;
LAB_0805c5bc:
      uVar3 = sub_0802AD94(uVar3,param_1,&DAT_0885743c);
      *(undefined4 *)(param_1 + 0x2c) = uVar3;
    }
    else if (uVar5 < 2) {
      if (uVar5 == 0) {
        uVar3 = 0xc;
        goto LAB_0805c5bc;
      }
    }
    else if (uVar5 == 2) {
      uVar3 = 0xe;
      goto LAB_0805c5bc;
    }
LAB_0805c5c4:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0805c5d6;
  }
  iVar4 = sub_0802B3CC();
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0805c5d6:
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885540c + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(undefined2 *)(param_1 + 0xca) = *(undefined2 *)(param_1 + 0xa4);
  return in_lr;
}

