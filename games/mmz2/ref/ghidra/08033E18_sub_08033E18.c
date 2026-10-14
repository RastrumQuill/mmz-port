// sub_08033E18 at 0x08033E18 (thumb)

undefined8 sub_08033E18(int param_1,undefined4 param_2)

{
  undefined uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x176) = 3;
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 1;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 1;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  uVar1 = **(undefined **)(&DAT_08335b18 + (uint)*(byte *)(param_1 + 0x1fc) * 4);
  pcVar2 = (char *)sub_08035BD8(uVar1);
  sub_0801EA38(param_1,(int)*pcVar2,0,param_2);
  *(undefined *)(param_1 + 0x2b7) = 1;
  *(undefined *)(param_1 + 699) = 0;
  *(undefined *)(param_1 + 0x2bf) = uVar1;
  iVar3 = 3;
  do {
    iVar3 = iVar3 + -1;
    ((undefined *)(param_1 + 700))[iVar3] = 0;
  } while (iVar3 != 0);
  *(undefined *)(param_1 + 700) = uVar1;
  *(undefined *)(param_1 + 0x2b8) = 0;
  return CONCAT44(in_lr,3);
}

