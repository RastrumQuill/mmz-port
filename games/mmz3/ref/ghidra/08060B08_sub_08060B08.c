// sub_08060B08 at 0x08060B08 (thumb)

undefined4 sub_08060B08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined auStack_1c [8];
  
  sub_0801622C(param_1,param_1 + 0x54,param_1 + 0x5c);
  DAT_0202f4a5 = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  sub_0803D3D4(param_1,&DAT_08361d9c,0x60);
  *(undefined4 *)(param_1 + 0x98) = 0x8061681;
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xb5) = 0xff;
  *(undefined *)(param_1 + 0xb6) = 0xff;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xb7) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0xc2) = 0;
  iVar1 = DAT_020302c4 + 0x17ff;
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0xb8) = iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0xb400;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_08091F5C(auStack_1c,0,param_1);
  sub_08091F5C(auStack_1c,1,param_1);
  uVar2 = sub_08091F5C(auStack_1c,2,param_1);
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  sub_080040A8(0xa7,0x2c0);
  sub_080040A8(0xa8,0x2e0);
  sub_080040A8(0xa9,0x300);
  sub_080040A8(0xaa,0x2c0);
  sub_08060C6C(param_1);
  return in_lr;
}

