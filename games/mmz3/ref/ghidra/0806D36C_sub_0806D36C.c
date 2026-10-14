// sub_0806D36C at 0x0806D36C (thumb)

undefined4 sub_0806D36C(int param_1)

{
  short sVar1;
  byte bVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + -0x1200;
  sub_080B2484(2,&local_1c);
  sVar1 = sub_08009A3C(local_1c,local_18);
  if (sVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar2 = bVar2 | 0x10;
    }
    sub_080B5F14(&local_1c,&DAT_08362ee8,0,bVar2);
    bVar2 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar2 = bVar2 | 0x10;
    }
    sub_080B5F14(&local_1c,&DAT_08362ee8,0,bVar2);
    bVar2 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar2 = bVar2 | 0x10;
    }
    sub_080B5F14(&local_1c,&DAT_08362f04,0,bVar2);
    bVar2 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar2 = bVar2 | 0x10;
    }
    sub_080B5F14(&local_1c,&DAT_08362f04,0,bVar2);
  }
  sub_0800471C(0x2a);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

