// sub_080BF964 at 0x080BF964 (thumb)

undefined4 sub_080BF964(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_080bfa2c;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800AE3C(param_1 + 0x54);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08348710;
    *(undefined2 *)(param_1 + 0x26) = 0x2401;
    *(int *)(param_1 + 0x40) = param_1 + 100;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  iVar3 = (*(byte *)(param_1 + 0x12) & 7) * 4;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) + *(int *)(&DAT_08348718 + iVar3) * 0x100;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + *(int *)(&DAT_08348738 + iVar3) * 0x100;
  uVar4 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)uVar4;
  local_c = *(int *)(param_1 + 0x58) + (uint)*(byte *)(param_1 + 0x12) * 0x800;
  if ((uVar4 & 1) == 0) {
    local_10 = -0x900;
  }
  else {
    local_10 = 0x900;
  }
  local_10 = *(int *)(param_1 + 0x54) + local_10;
  sVar2 = sub_08008354(local_10,local_c);
  if (sVar2 != 0) {
    sub_080AC60C(3,&local_10);
  }
  if (*(byte *)(param_1 + 0x12) < 0x1e) {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080bfa2c:
  sub_080128D4(param_1);
  if (*(int *)(param_1 + 0x60) < 0x700) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x20;
  }
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0x68) = iVar3;
  uVar4 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if (0x3000 < uVar4) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

