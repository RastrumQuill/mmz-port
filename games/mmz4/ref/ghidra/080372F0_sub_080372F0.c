// sub_080372F0 at 0x080372F0 (thumb)

undefined4 sub_080372F0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  bool bVar2;
  
  cVar1 = sub_0803A434(param_1,*(char *)(param_1 + 0xc0) != '\x02');
  bVar2 = cVar1 == '\x02';
  sub_0801CF00(param_1,0x2900);
  if ((!bVar2) && (*(char *)(param_1 + 0x267) == '\x03')) {
    bVar2 = true;
  }
  sub_080406A0(param_1,bVar2);
  *(undefined *)(param_1 + 0x151) = 0xe;
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) & 0xf7;
  *(undefined *)(param_1 + 0x101) = 1;
  sub_08037370(param_1);
  return in_lr;
}

