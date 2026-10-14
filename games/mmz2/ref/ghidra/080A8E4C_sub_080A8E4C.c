// sub_080A8E4C at 0x080A8E4C (thumb)

undefined4 sub_080A8E4C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  piVar4 = (int *)(param_1 + 0xb8);
  cVar1 = sub_08022AB8(*piVar4);
  if ((((cVar1 == '\0') && (*piVar4 != 0)) && ((DAT_0202ec38 & 1) != 0)) &&
     (uVar3 = DAT_0202ec42 & 1, (DAT_0202ec42 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
    *(char *)(param_1 + 0xd) = (char)uVar3;
    sub_08012580(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    sub_080127E4(param_1,0x7101);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(uint *)(param_1 + 0x60) = uVar3;
    *(undefined2 *)(param_1 + 0xb6) = 300;
    uVar2 = *(undefined4 *)(*piVar4 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*piVar4 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined *)(param_1 + 0xb4) = 0;
    *(undefined *)(param_1 + 0xb5) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_083453a4,param_1 + 0x54,4);
    *(int *)(param_1 + 0xa0) = param_1;
    *(uint *)(param_1 + 0x98) = uVar3;
    sub_080032EC(0x40);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

