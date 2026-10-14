// sub_080CE8B4 at 0x080CE8B4 (thumb)

undefined4 sub_080CE8B4(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  undefined2 auStack_2c [12];
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_080EF3F0(auStack_2c,&DAT_080ef7e8,0x18);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,auStack_2c[*(byte *)(param_1 + 0x11)]);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  cVar2 = sub_080EF330(*(undefined *)(param_1 + 0x11),6);
  if (cVar2 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_0834997c,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  }
  else {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  }
  iVar1 = DAT_0202ed50;
  *(int *)(param_1 + 0x54) = DAT_0202ed50 + 0xa7ff;
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x60) + 0x5800;
  if (*(byte *)(param_1 + 0x11) < 8) {
    if (*(byte *)(param_1 + 0x11) < 6) goto LAB_080ce9a2;
    iVar3 = 0xbfff;
  }
  else {
    iVar3 = 0xb7ff;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar3;
LAB_080ce9a2:
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080CE840(param_1);
  return in_lr;
}

