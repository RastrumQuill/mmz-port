// sub_08017D18 at 0x08017D18 (thumb)

undefined8 sub_08017D18(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  uVar1 = *(undefined *)(param_1 + 0xc3);
  *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
  *(undefined *)(param_1 + 0xbe) = 3;
  *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
  *(undefined *)(param_1 + 0xbf) = 2;
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = uVar1;
  sub_08018C20(param_1,(&DAT_082a8146)[*(byte *)(param_1 + 0xd)],(int)*(char *)(param_1 + 0x71),
               (int)*(char *)(param_1 + 0x72));
  return CONCAT44(in_lr,3);
}

