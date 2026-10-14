// sub_080579B4 at 0x080579B4 (thumb)

undefined8 sub_080579B4(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  uVar1 = sub_080EF330(uVar1 * 2 >> 0x11,6);
  uVar3 = 4;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    uVar3 = 3;
  }
  for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1 & 0xff) {
    uVar4 = sub_080EF1E8(uVar2 + (uVar1 & 0xff),6);
    uVar4 = uVar4 & 0xff;
    if (((int)(uint)*(byte *)(param_1 + 0xce) >> uVar4 & 1U) == 0) break;
  }
  *param_2 = *(int *)(param_1 + 0xb8) + (&DAT_0833c468)[uVar4];
  param_2[1] = *(int *)(param_1 + 0xbc) + -0xa000;
  return CONCAT44(in_lr,uVar4);
}

