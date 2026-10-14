// sub_0803972C at 0x0803972C (thumb)

undefined4 sub_0803972C(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,*(undefined2 *)(&DAT_0835cbf8 + (uint)*(byte *)(param_1 + 0x10) * 2));
  uVar4 = **(undefined4 **)(&DAT_0835d9bc + (uint)*(byte *)(param_1 + 0x10) * 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,uVar4,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(byte *)(param_1 + 0x10) == 0x15) {
    sub_0800471C(0x38);
  }
  else if (*(byte *)(param_1 + 0x10) < 0xb) {
    sub_0800471C(0x36);
  }
  else {
    sub_0800471C(0x37);
  }
  *(undefined *)(param_1 + 0xbb) = 1;
  if ((*(byte *)(*(int *)(*(int *)(&DAT_0835d9bc + (uint)*(byte *)(param_1 + 0x10) * 4) + 4) + 6) &
      2) == 0) {
    *(undefined *)(param_1 + 0xb8) = 0;
    *(undefined *)(param_1 + 0xb9) = 8;
    if ((*(ushort *)(&DAT_0835cbf8 + (uint)*(byte *)(param_1 + 0x10) * 2) & 1) != 0) {
      *(undefined *)(param_1 + 0xbb) = 2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xb8) = (&DAT_0835cc24)[*(byte *)(iVar3 + 0xc2)];
    *(undefined *)(param_1 + 0xb9) = 8;
  }
  if (*(char *)(param_1 + 0x10) == '\x15') {
    *(undefined *)(param_1 + 0xb9) = 6;
  }
  cVar1 = sub_080346FC(iVar3);
  *(char *)(param_1 + 0xb9) = cVar1 + *(char *)(param_1 + 0xb9);
  if (*(char *)(param_1 + 0xbb) == '\0') {
    sub_080073A0(param_1 + 0x74,uVar4,*(undefined *)(param_1 + 0xb9),*(undefined *)(param_1 + 0xb8),
                 0xffffffff,0xffffffff);
  }
  else {
    sub_080073A0(param_1 + 0x74,uVar4,*(undefined *)(param_1 + 0xb9),*(undefined *)(param_1 + 0xb8),
                 0xffffffff,*(undefined *)(param_1 + 0xbb));
  }
  *(undefined *)(param_1 + 0xba) = 0;
  if (((*(ushort *)(iVar3 + 0xc6) & 0x200) != 0) &&
     ((*(char *)(param_1 + 0x10) == '\f' || (*(char *)(param_1 + 0x10) == '\x0f')))) {
    if (*(char *)(iVar3 + 0xc2) == '\x02') {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    *(undefined *)(param_1 + 0xba) = uVar2;
  }
  *(undefined *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0x98) = 0x8039bd5;
  sub_080398D8(param_1);
  return in_lr;
}

