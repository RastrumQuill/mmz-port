// sub_08083ED4 at 0x08083ED4 (thumb)

undefined4 sub_08083ED4(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  bVar1 = *(byte *)(param_1 + 0x13);
  local_1c = *(int *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + -0xc00;
  cVar2 = sub_08083FD8();
  if (cVar2 == '\0') {
    sub_080032EC(0x2a);
    uVar3 = uVar3 << 4 | (uint)bVar1;
    sub_080B0ACC(&local_1c,&DAT_08341178,0,uVar3);
    sub_080B0ACC(&local_1c,&DAT_08341194,0,uVar3);
    sub_080B0ACC(&local_1c,&DAT_083411b0,0,uVar3);
  }
  else {
    sub_0808400C(param_1 + 0x54,0x1800,6,8);
    sub_080032EC(0x31);
    uVar3 = uVar3 << 4 | (uint)bVar1;
    sub_080B0ACC(&local_1c,&DAT_083411cc,0,uVar3);
    sub_080B0ACC(&local_1c,&DAT_083411e8,0,uVar3);
    sub_080B0ACC(&local_1c,&DAT_08341204,0,uVar3);
  }
  uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_1c = *(int *)(param_1 + 0x54) + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar3 & 0x7fffffff;
  local_18 = *(int *)(param_1 + 0x58) + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  sub_080AC60C(1,&local_1c);
  return in_lr;
}

