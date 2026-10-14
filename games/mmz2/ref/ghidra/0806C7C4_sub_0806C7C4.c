// sub_0806C7C4 at 0x0806C7C4 (thumb)

undefined4 sub_0806C7C4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0x4a);
    sub_08006E08(param_1 + 0x74,&DAT_0833e53c);
    sub_080127E4(param_1,0xb03);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0xfffffe00;
    }
    else {
      uVar1 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + -0x20;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x7ff < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x800;
  }
  if (*(int *)(param_1 + 0x58) <= DAT_0202ed54 + -0xb000) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

