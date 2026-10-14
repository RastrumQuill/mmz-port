// sub_0802E44C at 0x0802E44C (thumb)

undefined4 sub_0802E44C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(byte *)(param_1 + 0x2b9) - 1;
  bVar1 = (byte)iVar2;
  *(byte *)(param_1 + 0x2b9) = bVar1;
  if (iVar2 == 0) {
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 4;
    *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x179);
    *(byte *)(param_1 + 0x179) = bVar1;
  }
  sub_0803609C(param_1,&UNK_08335d58 + (uint)*(byte *)(param_1 + 0x177) * 4);
  sub_08035FB4(param_1,0,1,1);
  return in_lr;
}

