// sub_0808604C at 0x0808604C (thumb)

undefined4 sub_0808604C(int param_1)

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
  local_18 = *(int *)(param_1 + 0x58) + -0x1400;
  cVar2 = sub_080862F8();
  if (cVar2 == '\0') {
    sub_080032EC(0x2a);
  }
  else {
    sub_080032EC(0x31);
    local_1c = *(int *)(param_1 + 0x54) + (uVar3 * 2 + -1) * 0x800;
    local_18 = *(int *)(param_1 + 0x58) + -0x800;
    sub_08086220(&local_1c,0x1000,6,8);
  }
  uVar3 = uVar3 << 4 | (uint)bVar1;
  sub_080B0ACC(&local_1c,&DAT_083413dc,0,uVar3);
  sub_080B0ACC(&local_1c,&DAT_083413f8,0,uVar3);
  sub_080B0ACC(&local_1c,&DAT_08341430,0,uVar3);
  uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_1c = *(int *)(param_1 + 0x54) + ((uVar3 * 2 >> 0x11 & 7) - 3) * 0x100;
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar3 & 0x7fffffff;
  local_18 = *(int *)(param_1 + 0x58) + ((uVar3 * 2 >> 0x11 & 7) - 3) * 0x100;
  sub_080AC60C(1,&local_1c);
  return in_lr;
}

