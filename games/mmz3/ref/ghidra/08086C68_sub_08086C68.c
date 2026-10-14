// sub_08086C68 at 0x08086C68 (thumb)

undefined4 sub_08086C68(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (((*(short *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 8) != 0x2e03) &&
      (*(char *)(iVar2 + 0x10) == '\0')) && ((*(uint *)(param_1 + 0x14) & 4) != 0)) {
    if ((*(char *)(iVar2 + 0xb8) == '\0') &&
       (uVar1 = sub_0801A9A8(&DAT_02030288,iVar2 + 0x54), uVar1 < 0x800)) {
      *(char *)(iVar2 + 0xb8) = -1;
      sub_08086C08(DAT_020302c0 + 0x8bff,DAT_020302c4 + -0x6400,0);
      sub_08086C08(DAT_020302c0 + -0x8c00,DAT_020302c4 + -0x6400,1);
      sub_08086C08(DAT_020302c0 + 0x8bff,DAT_020302c4 + 0x63ff,2);
      sub_08086C08(DAT_020302c0 + -0x8c00,DAT_020302c4 + 0x63ff,3);
      sub_0800471C(0x146);
      *(undefined *)(iVar2 + 0xd) = 2;
      *(undefined *)(iVar2 + 0xe) = 0;
      *(undefined *)(iVar2 + 0x12) = 0x40;
    }
  }
  return in_lr;
}

