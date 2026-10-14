// sub_0802F6F4 at 0x0802F6F4 (thumb)

undefined4 sub_0802F6F4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080343B0(param_1,0xffffe200,0xffffea00,*(byte *)(param_1 + 10) >> 4 & 1);
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xec) = 0;
  }
  else {
    sub_08017700(param_1,0xb01);
    *(undefined *)(param_1 + 0x129) = 2;
    *(undefined *)(param_1 + 0xed) = 1;
    sub_0802F74C(param_1);
  }
  return in_lr;
}

