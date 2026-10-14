// sub_0807B480 at 0x0807B480 (thumb)

undefined4 sub_0807B480(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,*(byte *)(param_1 + 0x10) + 0x502c);
    *(char *)(param_1 + 0x12) = (&DAT_08340330)[*(byte *)(param_1 + 0x10)] + ' ';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  uVar2 = *(undefined4 *)(iVar4 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      local_1c = *(undefined4 *)(&DAT_08340310 + (uint)*(byte *)(param_1 + 0x10) * 4);
      local_18 = *(undefined4 *)(&DAT_08340320 + (uint)*(byte *)(param_1 + 0x10) * 4);
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      sub_080B6910(param_1,&local_1c,3,(uVar3 * 2 >> 0x11 & 1) + 1);
    }
    if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
      local_14 = *(int *)(param_1 + 0x54) +
                 *(int *)(&DAT_08340310 + (uint)*(byte *)(param_1 + 0x10) * 4);
      local_10 = *(int *)(param_1 + 0x58) +
                 *(int *)(&DAT_08340320 + (uint)*(byte *)(param_1 + 0x10) * 4);
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      sub_080B87E0(param_1,&local_14,2,uVar3 * 2 >> 0x11 & 0xff);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

