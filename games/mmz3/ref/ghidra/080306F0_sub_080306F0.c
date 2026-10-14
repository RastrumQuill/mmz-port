// sub_080306F0 at 0x080306F0 (thumb)

undefined4 sub_080306F0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080343B0(param_1,0xffffe500,0xffffee00,~(*(byte *)(param_1 + 10) >> 4) & 1);
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xec) = 0;
  }
  else {
    sub_08017700(param_1,0xc01);
    *(undefined *)(param_1 + 0x129) = 2;
    *(undefined *)(param_1 + 0xed) = 1;
    sub_0803074C(param_1);
  }
  return in_lr;
}

