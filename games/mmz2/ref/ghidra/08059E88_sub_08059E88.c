// sub_08059E88 at 0x08059E88 (thumb)

undefined4 sub_08059E88(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 200);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (((*(uint *)(iVar3 + 0x8c) & 0x200) == 0) && (*(short *)(iVar3 + 0xa4) != 0)) {
          sub_08022EA8(iVar3,0,0,0xfffffa00,0,0,0x28,0);
        }
        sub_080127E4(param_1,0xa723);
        *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      sub_080128D4(param_1);
      uVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
      if (uVar2 < 0x4001) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xc4) = 4;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080032EC(0x34);
    sub_080127E4(param_1,0xa722);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08006E08(param_1 + 0x74,&DAT_0833ca38);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

