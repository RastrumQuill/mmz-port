// sub_080CF0F0 at 0x080CF0F0 (thumb)

undefined4 sub_080CF0F0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0836ce8c)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0836ce5c,param_1 + 0x54,0x18);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80cf0ed;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(int *)(param_1 + 0x54) = DAT_020302c0 + 0xa7ff;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  else {
    *(int *)(param_1 + 0x54) = DAT_020302c0 + -0xa800;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  iVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + -0x4000;
  sub_08007390(param_1 + 0x74,&DAT_0836ce5c);
  *(undefined2 *)(param_1 + 0xb4) = 0;
  uVar2 = sub_08089D08(param_1);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined2 *)(param_1 + 0xb6) = 0;
  sub_080CF200(param_1);
  return in_lr;
}

