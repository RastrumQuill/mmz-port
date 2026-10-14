// sub_0809E520 at 0x0809E520 (thumb)

undefined4 sub_0809E520(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_080127E4(param_1,*(undefined2 *)
                        (&DAT_08343c20 +
                        ((uint)*(byte *)(param_1 + 0x12) + (uint)*(byte *)(param_1 + 0x10) & 3) * 2)
              );
  sub_080128D4(param_1);
  if ((*(char *)(iVar2 + 0xdc) != '\0') ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_0809E134(param_1);
  }
  return in_lr;
}

