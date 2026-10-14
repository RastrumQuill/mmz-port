// sub_0803B3C0 at 0x0803B3C0 (thumb)

undefined4 sub_0803B3C0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    sub_08017700(param_1,0x6700);
  }
  else {
    sub_08017700(param_1,0x6703);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar4 + 0x54);
    iVar3 = -0xb00;
  }
  else {
    iVar2 = *(int *)(iVar4 + 0x54);
    iVar3 = 0xb00;
  }
  *(int *)(param_1 + 0x54) = iVar2 + iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + -0x4800;
  *(undefined4 *)(param_1 + 0x5c) =
       *(undefined4 *)(&DAT_0835dd64 + (uint)*(byte *)(param_1 + 0x10) * 4);
  *(undefined4 *)(param_1 + 0x60) = 0xfffff900;
  *(undefined *)(param_1 + 0xd) = 5;
  *(undefined *)(param_1 + 0x12) = 0x40;
  *(undefined *)(param_1 + 0xc0) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  iVar2 = param_1 + 0x74;
  sub_0800736C(iVar2,&DAT_0835dd20,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    cVar1 = sub_080346FC(iVar4);
    sub_080073A0(iVar2,&DAT_0835dd20,cVar1 + '\b',0,0xffffffff,0xffffffff);
  }
  else {
    cVar1 = sub_080346FC(iVar4);
    sub_080073A0(iVar2,&DAT_0835dd20,cVar1 + '\n',2,0xffffffff,0xffffffff);
  }
  *(undefined4 *)(param_1 + 0x98) = 0x803b725;
  sub_0803B50C(param_1);
  return in_lr;
}

