// sub_0807FCE0 at 0x0807FCE0 (thumb)

undefined4 sub_0807FCE0(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x5f0b);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (1 < bVar2) {
    bVar2 = *(byte *)(param_1 + 10);
    bVar1 = *(byte *)(param_1 + 0x13);
    local_1c = *(int *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0xc00;
    sub_080032EC(0x2a);
    uVar3 = (uint)bVar1 | (bVar2 >> 4 & 1) << 4;
    sub_080B0ACC(&local_1c,&DAT_08340a90,0,uVar3);
    sub_080B0ACC(&local_1c,&DAT_08340aac,0,uVar3);
    sub_080B0ACC(&local_1c,&DAT_08340ac8,0,uVar3);
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_1c = local_1c + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    local_18 = local_18 + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    sub_080AC60C(1,&local_1c);
    sub_0801DD2C(1,param_1 + 0x54);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

