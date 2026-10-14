// sub_08039C34 at 0x08039C34 (thumb)

undefined4 sub_08039C34(int param_1,int param_2)

{
  undefined4 in_lr;
  
  sub_0803A174();
  if (*(char *)(param_1 + 0xe) != *(char *)(param_2 + 0x178)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_2 + 0x178);
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_080EF11C(param_1,param_2,*(undefined4 *)(&DAT_08336538 + (uint)*(byte *)(param_1 + 0xe) * 4));
  sub_0803A1C8(param_1);
  sub_0803A214(param_1,*(undefined *)(param_1 + 100));
  return in_lr;
}

